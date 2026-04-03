@EomK.oH = internal global [256 x i32] zeroinitializer
define dso_local void @EomK(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 12)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 11)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 13)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 10)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 9)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 32)
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %16, label %14
14:
  br label %41
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i64
  %23 = getelementptr inbounds [256 x i32], [256 x i32]* @EomK.oH, i64 0, i64 %22
  %24 = load i32, i32* %23
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %37, label %26
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %3
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %3
  %35 = sext i32 %33 to i64
  %36 = getelementptr inbounds i8, i8* %32, i64 %35
  store i8 %31, i8* %36
  br label %37
37:
  br label %38
38:
  %39 = load i32, i32* %4
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %4
  br label %7
41:
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %3
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  store i8 0, i8* %45
  ret void
}
