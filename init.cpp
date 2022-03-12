#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *args[]) {

	ofstream outFile;
	outFile.open("main.cpp");
	outFile << "// C\n";
	outFile << "#ifndef _GLIBCXX_NO_ASSERT\n";
	outFile << "#include <cassert>\n";
	outFile << "#endif\n";
	outFile << "#include <cctype>\n";
	outFile << "#include <cerrno>\n";
	outFile << "#include <cfloat>\n";
	outFile << "#include <ciso646>\n";
	outFile << "#include <climits>\n";
	outFile << "#include <clocale>\n";
	outFile << "#include <cmath>\n";
	outFile << "#include <csetjmp>\n";
	outFile << "#include <csignal>\n";
	outFile << "#include <cstdarg>\n";
	outFile << "#include <cstddef>\n";
	outFile << "#include <cstdio>\n";
	outFile << "#include <cstdlib>\n";
	outFile << "#include <cstring>\n";
	outFile << "#include <ctime>\n\n";

	outFile << "#if __cplusplus >= 201103L\n";
	outFile << "#include <ccomplex>\n";
	outFile << "#include <cfenv>\n";
	outFile << "#include <cinttypes>\n";
	outFile << "#include <cstdalign>\n";
	outFile << "#include <cstdbool>\n";
	outFile << "#include <cstdint>\n";
	outFile << "#include <ctgmath>\n";
	outFile << "#include <cwchar>\n";
	outFile << "#include <cwctype>\n";
	outFile << "#endif\n\n";

	outFile << "// C++\n";
	outFile << "#include <algorithm>\n";
	outFile << "#include <bitset>\n";
	outFile << "#include <complex>\n";
	outFile << "#include <deque>\n";
	outFile << "#include <exception>\n";
	outFile << "#include <fstream>\n";
	outFile << "#include <functional>\n";
	outFile << "#include <iomanip>\n";
	outFile << "#include <ios>\n";
	outFile << "#include <iosfwd>\n";
	outFile << "#include <iostream>\n";
	outFile << "#include <istream>\n";
	outFile << "#include <iterator>\n";
	outFile << "#include <limits>\n";
	outFile << "#include <list>\n";
	outFile << "#include <locale>\n";
	outFile << "#include <map>\n";
	outFile << "#include <memory>\n";
	outFile << "#include <new>\n";
	outFile << "#include <numeric>\n";
	outFile << "#include <ostream>\n";
	outFile << "#include <queue>\n";
	outFile << "#include <set>\n";
	outFile << "#include <sstream>\n";
	outFile << "#include <stack>\n";
	outFile << "#include <stdexcept>\n";
	outFile << "#include <streambuf>\n";
	outFile << "#include <string>\n";
	outFile << "#include <typeinfo>\n";
	outFile << "#include <utility>\n";
	outFile << "#include <valarray>\n";
	outFile << "#include <vector>\n";

	outFile << "#if __cplusplus >= 201103L\n";
	outFile << "#include <array>\n";
	outFile << "#include <atomic>\n";
	outFile << "#include <chrono>\n";
	outFile << "#include <condition_variable>\n";
	outFile << "#include <forward_list>\n";
	outFile << "#include <future>\n";
	outFile << "#include <initializer_list>\n";
	outFile << "#include <mutex>\n";
	outFile << "#include <random>\n";
	outFile << "#include <ratio>\n";
	outFile << "#include <regex>\n";
	outFile << "#include <scoped_allocator>\n";
	outFile << "#include <system_error>\n";
	outFile << "#include <thread>\n";
	outFile << "#include <tuple>\n";
	outFile << "#include <typeindex>\n";
	outFile << "#include <type_traits>\n";
	outFile << "#include <unordered_map>\n";
	outFile << "#include <unordered_set>\n";
	outFile << "#endif\n";
	outFile << "using namespace std;\n\n";
	outFile << "#define FAST_IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)\n";
	outFile << "typedef unsigned long long ull;\n";
	outFile << "typedef long long ll;\n";
	outFile << "typedef pair<int,int> ii;\n";
	outFile << "typedef deque<int> di;\n";
	outFile << "typedef deque<ii> dii;\n";
	outFile << "typedef vector<int> vi;\n";
	outFile << "typedef vector<ll> vl;\n";
	outFile << "typedef vector<ii> vii;\n";
	outFile << "typedef priority_queue<int, vi, less<int> > maxHeap;\n";
	outFile << "typedef priority_queue<int, vi, greater<int> > minHeap;\n\n";
	outFile << "void solve() {\n";
	outFile << "\t\n";
	outFile << "}\n\n";
	outFile << "int main() {\n";
	outFile << "\tFAST_IO;\n";
	outFile << "\tint t; cin >> t;\n";
	outFile << "\twhile (t--) solve();\n";
	outFile << "}";

	outFile.close();
}
