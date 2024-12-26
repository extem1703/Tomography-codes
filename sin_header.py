#! /usr/bin/python3

#Importando las librerías
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import warnings
warnings.filterwarnings("ignore")

with open('trigger_FC_90g_8H_1300_1.dat', 'r') as archivo:
    lineas = archivo.readlines()

#print(lineas)

header = 'cin num tch0 wch0 tch1 wch1 tch2 wch2 tch3 wch3 tch4 wch4 tch5 wch5 tch6 wch6 tch7 wch7 tch8 wch8 tch9 wch9 tch10 wch10 tch11 wch11 tch12 wch12 tch13 wch13 tch14 wch14 tch15 wch15\n'

lista = []

#lista.append(header)

for i in lineas:
    if len(i) < 120:
        lista.append(i)

#print(lista)

strlista = "".join(lista)

#print(strlista)

with open('Cleantrigger_FC_90g_8H_1300_1.dat', 'w') as archivo:
    archivo.write(strlista)
