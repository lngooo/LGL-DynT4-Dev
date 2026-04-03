@__const.XsIm1.iqOL = constant [2 x i8*] [i8* blockaddress(@XsIm1, %15), i8* blockaddress(@XsIm1, %29)]
@.str = constant [6 x i8] c"%lld\0A\00"
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
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i64 @XsIm1(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
