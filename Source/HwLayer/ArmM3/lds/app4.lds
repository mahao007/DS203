/* Define memory regions. */
MEMORY
{
  ROM (rx) : ORIGIN = 0x08024000, LENGTH = 32K
  RAM (rwx) : ORIGIN = 0x20003000, LENGTH = 36K
}

INCLUDE ../Source/HwLayer/ArmM3/lds/main.lds
