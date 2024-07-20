# ATTACH PORT TO USB WSL
usb-connect REF (https://learn.microsoft.com/en-us/windows/wsl/connect-usb)

winget install --interactive --exact dorssel.usbipd-win


usbipd list


```
PS C:\WINDOWS\system32> usbipd list
Connected:
BUSID  VID:PID    DEVICE                                                        STATE
1-4    0c45:6366  USB Camera                                                    Not shared
1-6    0483:374b  ST-Link Debug, Dispositif de stockage de masse USB, STMic...  Attached
1-8    0bda:c821  Realtek Bluetooth Adapter                                     Not shared

```

usbipd bind --busid 1-6


usbipd attach --busid 1-6 --wsl




Ouvrez votre distribution WSL et utilisez la commande lsusb pour vérifier que le périphérique USB est visible.

bash

lsusb


Déconnecter le périphérique lorsque vous avez terminé :

Pour détacher le périphérique USB de WSL, utilisez la commande suivante dans PowerShell :

powershell

usbipd detach --busid 1-6


# RUN
make BOARD=nucleo-f334r8

make flash BOARD=nucleo-f334r8