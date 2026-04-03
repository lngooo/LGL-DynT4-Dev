define dso_local void @ykB(i8* %0, i32 %1, i32 %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i8*, i8** %4
  %8 = load i32, i32* %5
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds i8, i8* %7, i64 %9
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %18, label %13
13:
  %14 = load i8*, i8** %4
  %15 = load i32, i32* %6
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  store i8 0, i8* %17
  br label %47
18:
  %19 = load i8*, i8** %4
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = zext i8 %23 to i32
  %25 = call i32 @isspace(i32 %24)
  %26 = icmp ne i32 %25, 0
  br i1 %26, label %42, label %27
27:
  %28 = load i8*, i8** %4
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = load i8*, i8** %4
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  store i8 %32, i8* %36
  %37 = load i8*, i8** %4
  %38 = load i32, i32* %5
  %39 = add nsw i32 %38, 1
  %40 = load i32, i32* %6
  %41 = add nsw i32 %40, 1
  call void @ykB(i8* %37, i32 %39, i32 %41)
  br label %47
42:
  %43 = load i8*, i8** %4
  %44 = load i32, i32* %5
  %45 = add nsw i32 %44, 1
  %46 = load i32, i32* %6
  call void @ykB(i8* %43, i32 %45, i32 %46)
  br label %47
47:
  ret void
}
declare i32 @isspace(i32)
define dso_local void @CK5(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  call void @ykB(i8* %3, i32 0, i32 0)
  ret void
}
