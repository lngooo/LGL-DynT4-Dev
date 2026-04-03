define dso_local i32 @rkL(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  %5 = alloca [256 x i32]
  %6 = alloca i8*
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  %8 = getelementptr inbounds [256 x i32], [256 x i32]* %5, i64 0, i64 0
  call void @llvm.memset.p0i8.i64(i8* align 16 %9, i8 0, i64 1024, i1 false)
  %11 = load i8*, i8** %3
  store i8* %11, i8** %6
  br label %12
12:
  %13 = load i8*, i8** %6
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %18, label %16
16:
  br label %30
18:
  %19 = getelementptr inbounds [256 x i32], [256 x i32]* %5, i64 0, i64 0
  %20 = load i8*, i8** %6
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i32
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %19, i64 %23
  %25 = load i32, i32* %24
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %24
  br label %27
27:
  %28 = load i8*, i8** %6
  %29 = getelementptr inbounds i8, i8* %28, i32 1
  store i8* %29, i8** %6
  br label %12
30:
  %31 = getelementptr inbounds [256 x i32], [256 x i32]* %5, i64 0, i64 0
  %32 = load i8, i8* %4
  %33 = zext i8 %32 to i32
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %31, i64 %34
  %36 = load i32, i32* %35
  ret i32 %36
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
