@__const.Abs.tbl = constant [2 x i8*] [i8* blockaddress(@Abs, %15), i8* blockaddress(@Abs, %12)]
define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca [2 x i8*]
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  %8 = zext i1 %7 to i32
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds [2 x i8*], [2 x i8*]* %4, i64 0, i64 %9
  %11 = load i8*, i8** %10
  br label %19
12:
  %13 = load i32, i32* %3
  %14 = sub nsw i32 0, %13
  store i32 %14, i32* %2
  br label %17
15:
  %16 = load i32, i32* %3
  store i32 %16, i32* %2
  br label %17
17:
  %18 = load i32, i32* %2
  ret i32 %18
19:
  %20 = phi i8* [ %11, %1 ]
  indirectbr i8* %20, [label %15, label %12]
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
