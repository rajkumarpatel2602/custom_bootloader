# Bootloader app header file

// Bootloader function for reading  data from host uart
//
// Has a decision tree implemented using switch case
// to act upon the uart packet.

void bootloader_user_read_data(void);
