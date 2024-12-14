#ifndef UEFI_H
#define UEFI_H 

#define EFI_SUCCESS 0

typedef unsigned long long UINTN;
typedef unsigned short CHAR16;
typedef unsigned long UINT32;

typedef UINTN EFI_STATUS;

typedef struct _EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

typedef EFI_STATUS (*EFI_TEXT_STRING) (
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This,
  CHAR16 *String
  );

struct _EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL {
  UINTN buf1;
  EFI_TEXT_STRING OutputString;
  UINTN buf2[8];
};

typedef struct {
  UINTN buf[3];
} EFI_TABLE_HEADER;

typedef struct {
  EFI_TABLE_HEADER Hdr;
  UINTN buf[1];
  UINT32 buf2;
  UINTN buf3[3];
  EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *ConOut;
  UINTN buf4[6];
} EFI_SYSTEM_TABLE;

#endif /* UEFI_H */
