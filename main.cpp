#include "includes.h"

int main()
{
    Inject* inject = new Inject();
    inject->inject_module_from_path_to_process_by_name(xor_w(L"C:\\module_to_inject.dll"), xor_w(L"notepad.exe"));
}