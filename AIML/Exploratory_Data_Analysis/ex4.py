import pandas as pd
data = pd.read_csv("datasets.csv")#read data

print("Rows: ",data.shape[0])#calculates rows
print("col: ",data.shape[1])#gives no of columns
print("First five rows: ",data.head(5))#gives first five
print("Size of dataset: ",data.size)#gives
print("Number of missing values: ",data.isnull().sum())

print("\nSummary Statistics of Numerical Columns:")

numerical_data = data.select_dtypes(include='number')
print("Sum: ",numerical_data.sum())
print("Average : ",numerical_data.mean())
print("Min: ",numerical_data.min())
print("Max: ",numerical_data.max())
