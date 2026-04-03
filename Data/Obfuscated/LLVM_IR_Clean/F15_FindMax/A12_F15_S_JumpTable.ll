@__const.JAjv4.Qjm = constant [2 x i8*] [i8* blockaddress(@JAjv4, %34), i8* blockaddress(@JAjv4, %28)]
define dso_local i32 @JAjv4(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca [2 x i8*]
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32*, i32** %3
  %9 = getelementptr inbounds i32, i32* %8, i64 0
  %10 = load i32, i32* %9
  store i32 %10, i32* %5
  store i32 1, i32* %7
  br label %12
12:
  %13 = load i32, i32* %7
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %38
16:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %7
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = load i32, i32* %5
  %23 = icmp sgt i32 %21, %22
  %24 = zext i1 %23 to i32
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [2 x i8*], [2 x i8*]* %6, i64 0, i64 %25
  %27 = load i8*, i8** %26
  br label %40
28:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  store i32 %33, i32* %5
  br label %34
34:
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %7
  br label %12
38:
  %39 = load i32, i32* %5
  ret i32 %39
40:
  %41 = phi i8* [ %27, %16 ]
  indirectbr i8* %41, [label %34, label %28]
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
