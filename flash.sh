sudo id
echo 'Sleeping 7 seconds'
echo 'Enter boot mode of CTRL+C now...'
sleep 7
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash "$@"
sudo dfu-programmer atmega32u4 launch
