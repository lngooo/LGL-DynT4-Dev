@__const.XsIm1.iqOL = constant [2 x i8*] [i8* blockaddress(@XsIm1, %15), i8* blockaddress(@XsIm1, %29)]
define dso_local i64 @XsIm1(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca [2 x i8*]
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i64 0, i64* %2
  br label %31
9:
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 1, i64* %2
  br label %31
13:
  store i64 1, i64* %4
  br label %15
15:
  %16 = load i32, i32* %3
  %17 = icmp sgt i32 %16, 0
  br i1 %17, label %18, label %26
18:
  %19 = load i32, i32* %3
  %20 = add nsw i32 %19, -1
  store i32 %20, i32* %3
  %21 = sext i32 %19 to i64
  %22 = load i64, i64* %4
  %23 = mul nsw i64 %22, %21
  store i64 %23, i64* %4
  %24 = getelementptr inbounds [2 x i8*], [2 x i8*]* %5, i64 0, i64 0
  %25 = load i8*, i8** %24
  br label %33
26:
  %27 = getelementptr inbounds [2 x i8*], [2 x i8*]* %5, i64 0, i64 1
  %28 = load i8*, i8** %27
  br label %33
29:
  %30 = load i64, i64* %4
  store i64 %30, i64* %2
  br label %31
31:
  %32 = load i64, i64* %2
  ret i64 %32
33:
  %34 = phi i8* [ %25, %18 ], [ %28, %26 ]
  indirectbr i8* %34, [label %15, label %29]
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
