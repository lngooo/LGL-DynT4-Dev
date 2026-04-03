@__const.NewtonRoot.targets = constant [2 x i8*] [i8* blockaddress(@NewtonRoot, %20), i8* blockaddress(@NewtonRoot, %39)]
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca [2 x i8*]
  %7 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp slt i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 -1, i32* %2
  br label %42
11:
  %12 = load i32, i32* %3
  %13 = icmp slt i32 %12, 2
  br i1 %13, label %14, label %16
14:
  %15 = load i32, i32* %3
  store i32 %15, i32* %2
  br label %42
16:
  %17 = load i32, i32* %3
  %18 = sext i32 %17 to i64
  store i64 %18, i64* %4
  br label %20
20:
  %21 = load i64, i64* %4
  %22 = load i32, i32* %3
  %23 = sext i32 %22 to i64
  %24 = load i64, i64* %4
  %25 = sdiv i64 %23, %24
  %26 = add nsw i64 %21, %25
  %27 = ashr i64 %26, 1
  store i64 %27, i64* %5
  %28 = load i64, i64* %5
  %29 = load i64, i64* %4
  %30 = icmp sge i64 %28, %29
  %31 = zext i1 %30 to i32
  store i32 %31, i32* %7
  %32 = load i32, i32* %7
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %38
34:
  %35 = load i64, i64* %5
  store i64 %35, i64* %4
  %36 = getelementptr inbounds [2 x i8*], [2 x i8*]* %6, i64 0, i64 0
  %37 = load i8*, i8** %36
  br label %44
38:
  br label %39
39:
  %40 = load i64, i64* %4
  %41 = trunc i64 %40 to i32
  store i32 %41, i32* %2
  br label %42
42:
  %43 = load i32, i32* %2
  ret i32 %43
44:
  %45 = phi i8* [ %37, %34 ]
  indirectbr i8* %45, [label %20, label %39]
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
  %14 = call i32 @NewtonRoot(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
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
