from ProgramStudi import ProgramStudi
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course


crs1 = Course("Alpro", "3", "IK100")
crs2 = Course("Strukdat", "3", "IK101")
crs3 = Course("DPBO", "3", "IK102")

crs4 = Course("Alpro", "3", "PIK100")
crs5 = Course("Strukdat", "3", "PIK101")
crs6 = Course("DPBO", "3", "PIK102")

mhs1 = Mahasiswa("2102665", "FPMIPA", "32133001201313",
                 "Bintang Fajar", "L", "UPI", "bintangfajar@upi.edu")
mhs2 = Mahasiswa("2102666", "FPMIPA", "321300494940",
                 "Muhammad Nur Yasin", "L", "UPI", "mnyasin@upi.edu")


dsn1 = Dosen("19293733", "S2", "AI",
             "3213300032", "Yaya Wihardi", "L", "UPI", "yaya@upi.edu")
dsn2 = Dosen("19293732", "S2", "algoritma",
             "3213302131", "Rosa Ariani S", "P", "UPI", "rosa@upi.edu")


prodi1 = ProgramStudi("Ilmu Komputer", "IK")
prodi1.add_mahasiswa(mhs1)
prodi1.add_dosen(dsn1)
prodi1.add_course(crs1)
prodi1.add_course(crs2)
prodi1.add_course(crs3)


prodi2 = ProgramStudi("Pendidikan Ilmu Komputer", "PIK")
prodi2.add_mahasiswa(mhs2)
prodi2.add_dosen(dsn2)
prodi2.add_course(crs4)
prodi2.add_course(crs5)
prodi2.add_course(crs6)

listprodi = [prodi1, prodi2]
print()

for prd in listprodi:
    print("Nama Program Studi : ", prd.get_nama_prodi())
    print("Kode Program Studi : ", prd.get_kode_prodi())
    print("")
    print("dosen")
    for i in prd.get_listdosen():
        print("Nama : ", i.get_nama())
        print("NIK : ", i.get_nik())
        print("NIP : ", i.get_nip())
        print("Jenis Kelamin : ", i.get_jenis_kelamin())
        print("Keahlian : ", i.get_keahlian())
        print("Pendidikan Terakhir : ", i.get_pend_terakhir())
        print("Asal Universitas : ", i.get_asal_universitas())
        print("Email Edu : ", i.get_email_edu())

    print("\nmahasiswa : ")
    for i in prd.get_listmhs():
        print("Nama : ", i.get_nama())
        print("NIK : ", i.get_nik())
        print("NIM : ", i.get_nim())
        print("Fakultas : ", i.get_fakultas())
        print("Jenis Kelamin : ", i.get_jenis_kelamin())
        print("Asal Universitas : ", i.get_asal_universitas())
        print("Email Edu : ", i.get_email_edu())
    print("\nmata kuliah")
    for i in prd.get_listcrs():
        print("Nama Matkul : ", i.get_nama_matakuliah())
        print("Kode MK : ", i.get_kode_mk())
        print("SKS : ", i.get_sks())
