from ProgramStudi import ProgramStudi
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course

listmhs = []
listdosen = []
listcourse = []
listprodi = []

crs1 = Course("Alpro", "3", "IK100")
crs2 = Course("Strukdat", "3", "IK101")
crs3 = Course("DPBO", "3", "IK102")
listcourse.append(crs1)
listcourse.append(crs2)
listcourse.append(crs3)

mhs1 = Mahasiswa("2102665", "FPMIPA", "32133001201313",
                 "Bintang Fajar", "L", "UPI", "bintangfajar@upi.edu")
mhs2 = Mahasiswa("2102666", "FPMIPA", "321300494940",
                 "Muhammad Nur Yasin", "L", "UPI", "mnyasin@upi.edu")
listmhs.append(mhs1)
listmhs.append(mhs2)

dsn1 = Dosen("19293733", "S2", "AI",
             "3213300032", "Yaya Wihardi", "L", "UPI", "yaya@upi.edu")
dsn2 = Dosen("19293732", "S2", "algoritma",
             "3213302131", "Rosa Ariani S", "P", "UPI", "rosa@upi.edu")
listdosen.append(dsn1)
listdosen.append(dsn2)

prodi1 = ProgramStudi("Ilmu Komputer", "IK")
prodi1.add_mahasiswa(mhs1)
prodi1.add_dosen(dsn1)
prodi1.add_course(crs1)
prodi1.add_course(crs2)
prodi1.add_course(crs3)
listprodi.append(prodi1)


prodi2 = ProgramStudi("Pendidikan Ilmu Komputer", "PIK")
prodi2.add_mahasiswa(mhs2)
prodi2.add_dosen(dsn2)
prodi2.add_course(crs1)
prodi2.add_course(crs2)
prodi2.add_course(crs3)
listprodi.append(prodi2)


print("Pilih Menu yang ingin ditampilkan\n1. List Program Studi\n2. List Dosen\n3. List Mahasiswa\n4. List Course\n")
ok = int(input())
if ok == 1:
    for prd in listprodi:
        print("Nama Program Studi : ", prd.get_nama_prodi())
        print("Kode Program Studi : ", prd.get_kode_prodi())
        print("")
elif ok == 2:
    for i in prodi1.get_listdosen():
        print("Nama : ", i.get_nama())
        print("NIK : ", i.get_nik())
        print("NIP : ", i.get_nip())
        print("Jenis Kelamin : ", i.get_jenis_kelamin())
        print("Keahlian : ", i.get_keahlian())
        print("Pendidikan Terakhir : ", i.get_pend_terakhir())
    for i in prodi2.get_listdosen():
        print("Nama : ", i.get_nama())
        print("NIK : ", i.get_nik())
        print("NIP : ", i.get_nip())
        print("Jenis Kelamin : ", i.get_jenis_kelamin())
        print("Keahlian : ", i.get_keahlian())
        print("Pendidikan Terakhir : ", i.get_pend_terakhir())
