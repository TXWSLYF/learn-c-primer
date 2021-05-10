/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  const length = strs.length;

  if (length === 0) {
    return "";
  }

  if (length === 1) {
    return strs[0];
  }

  if (length === 2) {
    let out = "";

    for (let i = 0; i < Math.min(strs[0].length, strs[1].length); i++) {
      if (strs[0][i] === strs[1][i]) {
        out += strs[0][i];
      } else {
        break;
      }
    }
    console.log(out);
    return out;
  }

  const str = longestCommonPrefix([strs[0], strs[1]]);
  const newStrs = strs.slice(2);
  newStrs.unshift(str);

  return longestCommonPrefix(newStrs);
};

longestCommonPrefix(["flower", "flow", "flight"]);
