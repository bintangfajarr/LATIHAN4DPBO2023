from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen


class ProgramStudi:
    __nama_prodi = ""
    __kode_prodi = ""
    __listcrs: Course = []
    __listmhs: Mahasiswa = []
    __listdosen: Dosen = []

    def __init__(self, nama_prodi="", kode_prodi=""):
        self.__nama_prodi = nama_prodi
        self.__kode_prodi = kode_prodi

    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def set_kode_prodi(self, kode_prodi):
        self.__kode_prodi = kode_prodi

    def get_nama_prodi(self):
        return self.__nama_prodi

    def get_kode_prodi(self):
        return self.__kode_prodi

    def add_course(self, course: Course):
        self.__listcrs.append(course)

    def add_mahasiswa(self, mahasiswa: Mahasiswa):
        self.__listmhs.append(mahasiswa)

    def add_dosen(self, dosen: Dosen):
        self.__listdosen.append(dosen)
        # self.__listdosen += dosen
        # pass

    def get_listcrs(self):
        return self.__listcrs

    def get_listmhs(self):
        return self.__listmhs

    def get_listdosen(self):
        return self.__listdosen
