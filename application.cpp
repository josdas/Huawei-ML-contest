#define _ijps 01
#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <fstream>
#include <assert.h> 
#include <functional>
using namespace std;

#define mk make_pair

			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
		}
		srand('C' + 'T' + 'A' + 'C' + 'Y' + 'M' + 'B' + 'A');
	}
	}
} __osafwf;

const int infi = (int)1e9 + 7;

	double x, y;
};

};

string Num[11] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

	string NameIn = "signal_" + Num[number] + "_in_test.dat";
	ifstream in(NameIn.c_str());

	vector<point> T;
		double xi, yi;
			T.push_back(point(xi, yi));
		}
	}
	in.close();
	return T;
}

function<point(const point&)> getFunction(pair<vector<double>, vector<double> > pa) {
	return [&, pa](const point& p) {
		double ansX = 0;
		for (size_t i = 0; i < pa.first.size(); ++i) {
			double w = pa.first[i];
			ansX += w * fun[i](p);
		}
		double ansY = 0;
		for (size_t i = 0; i < pa.second.size(); ++i) {
			double w = pa.second[i];
			ansY += w * fun[i](p);
		}
		return point(ansX, ansY);
	};
}

double xInput, yInput, xOut, yOut;

	string NameIn = "coefficients_" + Num[number] + ".dat";
	ifstream in(NameIn.c_str());

	in >> xInput >> yInput >> xOut >> yOut;

	pair<vector<double>, vector<double> > T;
		double xi, yi;
			T.first.push_back(xi);
			T.second.push_back(yi);
		}
	}
	in.close();
	return T;
}

	t.x *= xOut;
	t.y *= yOut;
	return t;
}

	t.x /= xInput;
	t.y /= yInput;
	return t;
}

	ofstream out(Name.c_str(), std::ofstream::out);
		out.precision(10);
		out << fixed << T[i].x << ' ' << T[i].y << '\n';
	}
	out.close();
}


	auto K = readCoef(test);
	auto Test = readTest(test);
	auto F = getFunction(K);
	vector<point> result;
		auto t = normalizeIn(Test[i]);
		auto x = unNormalizeOut(F(t));
		result.push_back(x);
	}
	writeResult(result, test);
}

int main() {
	solve(3);
}
