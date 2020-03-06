#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <initializer_list>
#include <algorithm>

typedef std::vector<std::pair<char, int>> list;
typedef std::map<char, list> graph;
#define p std::make_pair

main(int argc, char const *argv[])
{
	graph g;
	g['a'] = list({p('b', 10), p('c', 5)});
	g['b'] = list({p('a', 10), p('c', 7)});
	g['c'] = list({p('a', 5), p('b', 7), p('d', 3)});
	g['d'] = list({p('c', 3), p('e', 12)});
	g['e'] = list({p('d', 12)});
	return 0;
}
