from SivitasAkademik import SivitasAkademik


class Dosen(SivitasAkademik):
    __nip = ""
    __pend_terakhir = ""
    __keahlian = ""

    def __init__(self, nip="", pend_terakhir="", keahlian="", nik="", nama="", jenis_kelamin="", asal_universitas="", email_edu=""):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__nip = nip
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian

    def set_nip(self, nip):
        self.__nip = nip

    def set_pend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian

    def get_nip(self):
        return self.__nip

    def get_pend_terakhir(self):
        return self.__pend_terakhir

    def get_keahlian(self):
        return self.__keahlian
