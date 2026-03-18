#ifdef BUILD_APPLE2
#include <stdint.h>

typedef struct {
  unsigned int slot:4;
  unsigned int drive:4;
  uint8_t fuji;
} DiskII_SlotDrive;

extern DiskII_SlotDrive diskii_slotdrive[];

extern void diskii_find();

#endif /* BUILD_APPLE2 */
