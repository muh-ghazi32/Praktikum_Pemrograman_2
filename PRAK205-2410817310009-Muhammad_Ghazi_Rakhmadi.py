import math

A = float(input("Masukkan panjang sisi A (tinggi): "))
B = float(input("Masukkan panjang sisi B (sisi miring): "))

tinggi = A
sisi_miring = B
alas = math.sqrt(B**2 - A**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

print("\n")

A = float(input("Masukkan panjang sisi A (tinggi): "))
B = float(input("Masukkan panjang sisi B (sisi miring): "))

tinggi = A
sisi_miring = B
alas = math.sqrt(B**2 - A**2)

keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")