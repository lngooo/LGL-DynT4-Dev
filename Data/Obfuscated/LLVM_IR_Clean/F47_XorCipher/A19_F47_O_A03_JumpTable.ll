define dso_local void @J(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i8*, i8** %4
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %5
  br label %10
20:
  %21 = load i32, i32* %5
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 1, i32* %6
  br label %80
24:
  store i32 0, i32* %7
  br label %26
26:
  %27 = load i8*, i8** %3
  %28 = load i32, i32* %7
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = icmp ne i8 %31, 0
  br i1 %32, label %35, label %33
33:
  store i32 4, i32* %6
  br label %79
35:
  %37 = load i32, i32* %7
  %38 = and i32 %37, 1
  store i32 %38, i32* %8
  %39 = load i32, i32* %8
  switch i32 %39, label %57 [
    i32 0, label %40
  ]
40:
  %41 = load i8*, i8** %4
  %42 = load i32, i32* %7
  %43 = load i32, i32* %5
  %44 = srem i32 %42, %43
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %41, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = load i8*, i8** %3
  %50 = load i32, i32* %7
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = xor i32 %54, %48
  %56 = trunc i32 %55 to i8
  store i8 %56, i8* %52
  br label %74
57:
  %58 = load i8*, i8** %4
  %59 = load i32, i32* %7
  %60 = load i32, i32* %5
  %61 = srem i32 %59, %60
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %58, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = load i8*, i8** %3
  %67 = load i32, i32* %7
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %66, i64 %68
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = xor i32 %71, %65
  %73 = trunc i32 %72 to i8
  store i8 %73, i8* %69
  br label %74
74:
  br label %76
76:
  %77 = load i32, i32* %7
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %7
  br label %26
79:
  store i32 0, i32* %6
  br label %80
80:
  %82 = load i32, i32* %6
  switch i32 %82, label %84 [
    i32 0, label %83
    i32 1, label %83
  ]
83:
  ret void
84:
  unreachable
}
