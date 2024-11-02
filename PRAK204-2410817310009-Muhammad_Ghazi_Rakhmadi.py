jari_jari1 = float(input("Masukkan jari-jari: "))
tinggi1 = float(input("Masukkan tinggi: "))

luas1 = 2 * 22.0/7.0 * jari_jari1 * (jari_jari1 + tinggi1)
volume1 = 22.0/7.0 * (jari_jari1 ** 2) * tinggi1
keliling1 = 2 * 22.0/7.0 * jari_jari1

print(f"Volume tabung = {volume1:.2f}")
print(f"Luas permukaan tabung = {luas1:.2f}")
print(f"Keliling tabung = {keliling1:.2f}\n")

jari_jari2 = float(input("Masukkan jari-jari: "))
tinggi2 = float(input("Masukkan tinggi: "))

luas2 = 2 * 22.0/7.0 * jari_jari2 * (jari_jari2 + tinggi2)
volume2 = 22.0/7.0 * (jari_jari2 ** 2) * tinggi2
keliling2 = 2 * 22.0/7.0 * jari_jari2

print(f"Volume kerucut = {volume2:.2f}")
print(f"Luas permukaan kerucut = {luas2:.2f}")
print(f"Keliling kerucut = {keliling2:.2f}")