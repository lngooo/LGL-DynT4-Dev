@fYm0.gf = internal global i32 0
define dso_local void @fYm0(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %6 = load i8*, i8** %3
  %7 = load i8, i8* %6
  %8 = sext i8 %7 to i32
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* @fYm0.gf
  br label %43
11:
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i8*, i8** %4
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = icmp ne i8 %18, 0
  br i1 %19, label %20, label %23
20:
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %5
  br label %13
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* @fYm0.gf
  %26 = load i32, i32* %5
  %27 = srem i32 %25, %26
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %24, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = load i8*, i8** %3
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = xor i32 %34, %31
  %36 = trunc i32 %35 to i8
  store i8 %36, i8* %32
  %37 = load i32, i32* @fYm0.gf
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* @fYm0.gf
  %39 = load i8*, i8** %3
  %40 = getelementptr inbounds i8, i8* %39, i64 1
  %41 = load i8*, i8** %4
  call void @fYm0(i8* %40, i8* %41)
  br label %43
43:
  ret void
}
