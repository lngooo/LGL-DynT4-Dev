define dso_local i32 @WiP2(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 0, i32* %6
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %6
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %49
17:
  %18 = load i8*, i8** %4
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = load i8*, i8** %5
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp ne i32 %23, %29
  br i1 %30, label %31, label %45
31:
  %32 = load i8*, i8** %4
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = zext i8 %36 to i32
  %38 = load i8*, i8** %5
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = zext i8 %42 to i32
  %44 = sub nsw i32 %37, %43
  store i32 %44, i32* %3
  store i32 1, i32* %7
  br label %63
45:
  br label %46
46:
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %6
  br label %9
49:
  %50 = load i8*, i8** %4
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  %56 = load i8*, i8** %5
  %57 = load i32, i32* %6
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  %60 = load i8, i8* %59
  %61 = zext i8 %60 to i32
  %62 = sub nsw i32 %55, %61
  store i32 %62, i32* %3
  store i32 1, i32* %7
  br label %63
63:
  %65 = load i32, i32* %3
  ret i32 %65
}
