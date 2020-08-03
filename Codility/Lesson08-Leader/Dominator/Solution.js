// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

const solution = (A) => {
  // write your code in JavaScript (Node.js 8.9.4)
  const map = {};
  A.forEach((a) => {
    map[a] = map[a] ? map[a] + 1 : 1;
  });
  let dominator = null;
  Object.entries(map).forEach(([a, count]) => {
    if (count * 2 > A.length) {
      dominator = a;
      return false;
    }
  });

  if (!dominator) return -1;

  let dominatorIndex = -1;
  A.some((a, i) => {
    if (`${a}` === dominator) {
      dominatorIndex = i;
      return false;
    }
  });
  return dominatorIndex;
};
