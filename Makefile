APPLICATION=HelloWorld
BOARD ?=native
RIOTBASE ?= $(CURDIR)/../RIOT
DEVELHELP ?= 1

# Spécifiez les modules nécessaires
USEMODULE += xtimer
#USEMODULE += periph_gpio

include $(RIOTBASE)/Makefile.include