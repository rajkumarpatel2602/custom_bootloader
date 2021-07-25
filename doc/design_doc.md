# Bootloader workflow

- Custom bootloader will be placed in sector 0 and sector 1.
- by default custom bootloader will get called and will check if the user button was pressed on reset or not.
-- if pressed 
listen to the uart for new application.
-- if not pressed
jump to user application.
