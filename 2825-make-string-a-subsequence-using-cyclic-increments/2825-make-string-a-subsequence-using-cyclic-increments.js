var canMakeSubsequence = function (str1, str2) {
  let j = 0;
  for (const c of str1) {
    if (j < str2.length && (c === str2[j] || (c.charCodeAt(0) - 96) % 26 === (str2[j].charCodeAt(0) - 97) % 26))
      j++;
  }
  return j === str2.length;
};