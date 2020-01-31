#ifndef Z80_CORE_INTERPOLATE_H
#define Z80_CORE_INTERPOLATE_H

#include <string>
#include <vector>
#include <iostream>

/**
 * String interpolate
 *
 * Found at Rosetta code:
 * https://www.rosettacode.org/wiki/String_interpolation_(included)#C.2B.2B_2
 *
 * @tparam S
 * @tparam Args
 * @param orig
 * @param args
 * @return
 */
template<typename S, typename... Args>
std::string interpolate(const S& orig, const Args& ... args) {
    using std::string;
    using std::vector;

    string out(orig);

    // populate vector from argument list
    auto va = {args...};
    vector<string> v{va};

    size_t i = 1;

    for (string& s: v) {
        string is = std::to_string(i);

        string t = "{" + is + "}";  // "{1}", "{2}", ...
        try {
            auto pos = out.find(t);

            if (pos != std::string::npos)  // found token
            {
                out.erase(pos, t.length()); //erase token
                out.insert(pos, s);       // insert arg
            }

            i++;                           // next
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }

    } // for

    return out;
}

#endif //Z80_CORE_INTERPOLATE_H
