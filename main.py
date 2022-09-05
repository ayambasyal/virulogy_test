import pandas as pd
import os


# to clean the output file
os.system("sed -i '/Sequences/,$!d' blast_output3")
#

conc = pd.read_fwf("blast_output3",nrows=21)
print(conc)

# print(data)
#  f = open('blast_output3','r')
# print(f.read()[0:1000])
# data=pd.read_csv('blast_output3',skiprows=20)
# print(data)
