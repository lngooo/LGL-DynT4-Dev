define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %4
  %10 = srem i32 %9, 26
  %11 = add nsw i32 %10, 26
  %12 = srem i32 %11, 26
  store i32 %12, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %23, label %21
21:
  br label %96
23:
  %24 = load i8*, i8** %3
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp sge i32 %29, 97
  %31 = zext i1 %30 to i32
  %32 = load i8*, i8** %3
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = icmp sle i32 %37, 122
  %39 = zext i1 %38 to i32
  %40 = and i32 %31, %39
  %41 = load i8*, i8** %3
  %42 = load i32, i32* %6
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp sge i32 %46, 65
  %48 = zext i1 %47 to i32
  %49 = load i8*, i8** %3
  %50 = load i32, i32* %6
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = icmp sle i32 %54, 90
  %56 = zext i1 %55 to i32
  %57 = and i32 %48, %56
  %58 = or i32 %40, %57
  %59 = icmp ne i32 %58, 0
  br i1 %59, label %60, label %92
60:
  %61 = load i8*, i8** %3
  %62 = load i32, i32* %6
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  %65 = load i8, i8* %64
  %66 = sext i8 %65 to i32
  %67 = and i32 %66, 32
  %68 = icmp ne i32 %67, 0
  %69 = zext i1 %68 to i64
  %70 = select i1 %68, i32 97, i32 65
  %71 = trunc i32 %70 to i8
  store i8 %71, i8* %7
  %72 = load i8*, i8** %3
  %73 = load i32, i32* %6
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %72, i64 %74
  %76 = load i8, i8* %75
  %77 = sext i8 %76 to i32
  %78 = load i8, i8* %7
  %79 = sext i8 %78 to i32
  %80 = sub nsw i32 %77, %79
  %81 = load i32, i32* %5
  %82 = add nsw i32 %80, %81
  %83 = srem i32 %82, 26
  %84 = load i8, i8* %7
  %85 = sext i8 %84 to i32
  %86 = add nsw i32 %83, %85
  %87 = trunc i32 %86 to i8
  %88 = load i8*, i8** %3
  %89 = load i32, i32* %6
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %88, i64 %90
  store i8 %87, i8* %91
  br label %92
92:
  br label %93
93:
  %94 = load i32, i32* %6
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %6
  br label %14
96:
  ret void
}
