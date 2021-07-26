#bootloader code will reside here.


// Bootloader function for reading  data from host uart
//
// Has a decision tree implemented using switch case
// to act upon the uart packet.

void
bootloader_user_read_data(void){

    uint8_t rcv_len = 0;

    while(1){

        // read data from uart in buffer.

        // fill up the rcv_len from the first byte.

        // read the code from the second byte

        // switch case based logic for different command codes.

    }
}
