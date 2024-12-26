#! /usr/bin/python3

#Importando las librerías
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import warnings
warnings.filterwarnings("ignore")

# Leer el contenido del primer archivo y almacenarlo en lineas_archivo1
with open('Cleantrigger_FC_90g_8H_1300_1.dat', 'r') as file1:
    lineas_archivo1 = file1.readlines()

# Leer el contenido del segundo archivo y almacenarlo en lineas_archivo2
with open('Cleantrigger_FC_90g_8H_1300_2.dat', 'r') as file2:
    lineas_archivo2 = file2.readlines()

with open('Cleantrigger_FC_90g_8H_1300_3.dat', 'r') as file3:
    lineas_archivo3 = file3.readlines()

with open('Cleantrigger_FC_90g_8H_1300_4.dat', 'r') as file4:
    lineas_archivo4 = file4.readlines()

# Combinar las líneas de ambos archivos
lineas_finales = lineas_archivo1 + lineas_archivo2 + lineas_archivo3 + lineas_archivo4

# Escribir las líneas combinadas en el archivo final
with open('Cleantrigger_FC_90g_8H_1300.dat', 'w') as file_salida:
    for linea in lineas_finales:
        file_salida.write(linea)
