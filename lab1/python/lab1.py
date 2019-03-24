from ctypes import windll, byref, Structure, Array, wintypes
class SYSTEM_INFO(Structure):
    _fields_ = [("GetPhysicallyInstalledSystemMemory", wintypes.ULONG)]
si = SYSTEM_INFO()
kernel32 = windll.kernel32
kernel32.GetPhysicallyInstalledSystemMemory(byref(si))
print("%s: %s (0x%x)" % ("RAM", si.GetPhysicallyInstalledSystemMemory, si.GetPhysicallyInstalledSystemMemory))
