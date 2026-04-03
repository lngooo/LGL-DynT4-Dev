define dso_local i32 @C(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %9
19:
  store i32 0, i32* %5
  %22 = load i32, i32* %4
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %24
24:
  %25 = load i32, i32* %5
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %28, label %48
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %6
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp ne i32 %34, %40
  br i1 %41, label %42, label %43
42:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %49
43:
  %44 = load i32, i32* %5
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %5
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, -1
  store i32 %47, i32* %6
  br label %24
48:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %49
49:
  %53 = load i32, i32* %2
  ret i32 %53
}
