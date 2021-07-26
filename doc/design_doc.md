# Bootloader workflow

- Custom bootloader will be placed in sector 0 and sector 1.
- by default custom bootloader will get called and will check if the user button was pressed on reset or not.
-- if pressed 
listen to the uart for new application.
-- if not pressed
jump to user application. 0x0800-8000


# How bootloader app will make a jump to the user application?
-- It will read the MSP and set the MSP of user app using the CMSIS function. e.g. 0x0800-8000
-- After that It will make a function pointer hold the value of user application reset handler -- which is 0x0800-8000 + 4B
-- Makesure app is hldoing VECTOR TABLE relocation to 0x0800-8000
presently it will point to 0x0000-0000 only. which is actually aliased to 0x0800-0000 (where our actual bootloader will reside).
Hence, we have to make the Vector table relocation using VTOR. vector table offset register. e.g. VECT_TAB_OFFSET value.
Go to startup file and change SCB->VTOR and make it point to 0x0800-8000 using VECT_TAB_OFFSET in the user app.

# Host to bootloader command format

 ---- ------- ---------------
|1Len| 1 Code| 4 CRC         |
 ---- ------- ---------------

Bootloader command response will be complete response.

- BL_GO_TO_ADDE -- will have | 1 | 1 | 4B memory addr | 4B CRC |
Like this there are several commands which are deviating from the standard comamnds.



