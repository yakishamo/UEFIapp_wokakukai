#include "uefi.h"

EFI_STATUS efi_main(void *image_hansle __attribute((unused)), EFI_SYSTEM_TABLE *system_table) {
  system_table->ConOut->OutputString(
    system_table->ConOut, L"Hello, World!");
  while(1) asm("hlt");
  return EFI_SUCCESS;
}
