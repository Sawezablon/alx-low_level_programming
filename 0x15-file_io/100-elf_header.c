#include "main.h"

/**
 * main - program that displays the information contained in the ELF
 * @argc: Argument count
 * @argv: Argument vector.
 * Return: Always 0 (success).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;
	Elf64_Ehdr *ptr = malloc(sizeof(Elf64_Ehdr));
	int z;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	z = read(i, ptr, sizeof(Elf64_Ehdr));
	if (z == -1)
	{
		free(ptr);
		_close(i);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	if (ptr == NULL)
	{
		_close(i);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	_check(ptr->e_ident);
	printf("ELF Header:\n");
	_magic(ptr->e_ident);
	_class(ptr->e_ident);
	_data(ptr->e_ident);
	_version(ptr->e_ident);
	_os_abi(ptr->e_ident);
	_abi(ptr->e_ident);
	_type(ptr->e_type, ptr->e_ident);
	_entry(ptr->e_entry, ptr->e_ident);

	free(ptr);
	_close(i);
	return (0);
}

/**
 * _check - Checks is ELF file.
 * @ch: parameter.
 * Return: Nothing
 */
void _check(unsigned char *ch)
{
	int z;

	z = 0;
	while (z < 4)
	{
		if (ch[z] != 127 &&
		    ch[z] != 'E' &&
		    ch[z] != 'L' &&
		    ch[z] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		z++;
	}
}

/**
 * _magic - magic numbers of ELF.
 * @ch: parameter.
 * Return: Nothing
 */
void _magic(unsigned char *ch)
{
	int z;

	printf("  Magic:   ");

	z = 0;
	while (z < EI_NIDENT)
	{
		printf("%02x", ch[z]);

		if (z == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		z++;
	}
}

/**
 * _class - class of ELF.
 * @ch: parameter.
 * Return: Nothing
 */
void _class(unsigned char *ch)
{
	printf("  Class:                             ");

	switch (ch[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ch[EI_CLASS]);
	}
}

/**
 * _data - data of ELF.
 * @ch: parameter.
 * Return: Nothing
 */
void _data(unsigned char *ch)
{
	printf("  Data:                              ");

	switch (ch[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ch[EI_CLASS]);
	}
}

/**
 * _version - version of ELF.
 * @ch: parameter
 * Return: Nothing
 */
void _version(unsigned char *ch)
{
	printf("  Version:                           %d",
	       ch[EI_VERSION]);

	switch (ch[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _os_abi - OS/ABI of ELF.
 * @ch: parameter
 */
void _os_abi(unsigned char *ch)
{
	printf("  OS/ABI:                            ");

	switch (ch[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ch[EI_OSABI]);
	}
}

/**
 * _abi - ABI version of ELF.
 * @ch: parameter
 * Return: Nothing
 */
void _abi(unsigned char *ch)
{
	printf("  ABI Version:                       %d\n",
	       ch[EI_ABIVERSION]);
}

/**
 * _type - type of ELF ptr.
 * @e_type: parameter
 * @ch: parameter
 * Return: Nothing
 */
void _type(unsigned int e_type, unsigned char *ch)
{
	if (ch[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _entry - Prints the entry point of an ELF ptr.
 * @e_entry: The address of the ELF entry point.
 * @ch: A pointer to an array containing the ELF class.
 */
void _entry(unsigned long int e_entry, unsigned char *ch)
{
	printf("  Entry point address:               ");

	if (ch[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (ch[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _close - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void _close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
