#! /usr/bin/python3

#Importando las librerías
import numpy as np
import matplotlib.pyplot as plt
import warnings
from collections import Counter
warnings.filterwarnings("ignore")

nBars = 4
Nd = 2*nBars - 1
C = nBars-1
r = np.zeros((Nd,Nd))
theta = 30
d = 4.1
D = 40

lista = [0]

for i in range(nBars):
    for j in range(nBars):
        for k in range(nBars):
            for l in range(nBars):
                h = k-i
                b = l-j
                N = np.sqrt(((i-k)*d/D)**2 + (((j-l)*d/D)*np.cos(np.deg2rad(theta)) - np.sin(np.deg2rad(theta)))**2 + (((j-l)*d/D)*np.sin(np.deg2rad(theta)) + np.cos(np.deg2rad(theta)))**2)
                angl = np.rad2deg(np.arccos(((((j-l)*d)/D)*np.sin(np.deg2rad(theta)) + np.cos(np.deg2rad(theta)))/N))
                lista.append(angl)
                r[h+C,b+C]= angl
lista.pop(0)
contador = list(set(lista))
contador.sort()
print(contador)
print("Número de ángulos: " + str(len(contador)))
print(r)
