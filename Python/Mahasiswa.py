from SivitasAkademik import SivitasAkademik


class Mahasiswa(SivitasAkademik):
    __nim = ""

    def __init__(self, nim="", nik="", nama="", jenis_kelamin="", asal_universitas="", email_edu=""):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__nim = nim

    def set_nim(self, nim):
        self.__nim = nim

    def get_nim(self):
        return self.__nim
