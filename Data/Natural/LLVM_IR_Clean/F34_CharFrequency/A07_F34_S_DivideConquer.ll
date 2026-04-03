define dso_local i32 @count_range(i8* %0, i32 %1, i32 %2, i8 signext %3) {
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i8
  %10 = alloca i32
  store i8* %0, i8** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i8 %3, i8* %9
  %11 = load i32, i32* %7
  %12 = load i32, i32* %8
  %13 = icmp sgt i32 %11, %12
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %5
  br label %51
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %8
  %18 = icmp eq i32 %16, %17
  br i1 %18, label %19, label %30
19:
  %20 = load i8*, i8** %6
  %21 = load i32, i32* %7
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = load i8, i8* %9
  %27 = sext i8 %26 to i32
  %28 = icmp eq i32 %25, %27
  %29 = zext i1 %28 to i32
  store i32 %29, i32* %5
  br label %51
30:
  %32 = load i32, i32* %7
  %33 = load i32, i32* %8
  %34 = load i32, i32* %7
  %35 = sub nsw i32 %33, %34
  %36 = sdiv i32 %35, 2
  %37 = add nsw i32 %32, %36
  store i32 %37, i32* %10
  %38 = load i8*, i8** %6
  %39 = load i32, i32* %7
  %40 = load i32, i32* %10
  %41 = load i8, i8* %9
  %42 = call i32 @count_range(i8* %38, i32 %39, i32 %40, i8 signext %41)
  %43 = load i8*, i8** %6
  %44 = load i32, i32* %10
  %45 = add nsw i32 %44, 1
  %46 = load i32, i32* %8
  %47 = load i8, i8* %9
  %48 = call i32 @count_range(i8* %43, i32 %45, i32 %46, i8 signext %47)
  %49 = add nsw i32 %42, %48
  store i32 %49, i32* %5
  br label %51
51:
  %52 = load i32, i32* %5
  ret i32 %52
}
define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8 %1, i8* %5
  %9 = load i8*, i8** %4
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %6
  %12 = load i32, i32* %6
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %21
15:
  %16 = load i8*, i8** %4
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %17, 1
  %19 = load i8, i8* %5
  %20 = call i32 @count_range(i8* %16, i32 0, i32 %18, i8 signext %19)
  store i32 %20, i32* %3
  store i32 1, i32* %7
  br label %21
21:
  %23 = load i32, i32* %3
  ret i32 %23
}
declare i64 @strlen(i8*)
