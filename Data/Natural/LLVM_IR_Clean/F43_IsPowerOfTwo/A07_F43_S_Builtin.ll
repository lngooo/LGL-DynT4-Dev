define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp ugt i32 %3, 0
  br i1 %4, label %5, label %9
5:
  %6 = load i32, i32* %2
  %7 = call i32 @llvm.ctpop.i32(i32 %6)
  %8 = icmp eq i32 %7, 1
  br label %9
9:
  %10 = phi i1 [ false, %1 ], [ %8, %5 ]
  %11 = zext i1 %10 to i32
  ret i32 %11
}
declare i32 @llvm.ctpop.i32(i32)
