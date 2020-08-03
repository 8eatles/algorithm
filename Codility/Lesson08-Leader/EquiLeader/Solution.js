// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

//score: 88/100/75

function solution(A) {
  // write your code in JavaScript (Node.js 8.9.4)
  const frontLeaders = {};
  const backLeaders = {};

  const frontMap = {};
  const backMap = {};

  for (let i = 0; i < A.length - 1; i += 1) {
    const front = A[i];
    const back = A[A.length - 1 - i];
    frontMap[front] = frontMap[front] ? frontMap[front] + 1 : 1;
    backMap[back] = backMap[back] ? backMap[back] + 1 : 1;

    Object.entries(frontMap).forEach(([a, count]) => {
      if (count * 2 > 1 + i) {
        frontLeaders[i] = a;
        return false;
      }
    });

    Object.entries(backMap).forEach(([a, count]) => {
      if (count * 2 > 1 + i) {
        backLeaders[A.length - 2 - i] = a;
        return false;
      }
    });
  }

  let result = 0;
  for (let i = 0; i < A.length; i += 1) {
    if (!frontLeaders[i] || !backLeaders[i]) continue;
    if (frontLeaders[i] === backLeaders[i]) result += 1;
  }

  return result;
}
