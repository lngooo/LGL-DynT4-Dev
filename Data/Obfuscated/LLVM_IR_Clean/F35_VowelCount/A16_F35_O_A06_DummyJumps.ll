define dso_local i32 @H(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %16, label %15
15:
  br label %73
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  store i8 %21, i8* %5
  %22 = load i8, i8* %5
  %23 = sext i8 %22 to i32
  %24 = icmp eq i32 %23, 97
  br i1 %24, label %29, label %25
25:
  %26 = load i8, i8* %5
  %27 = sext i8 %26 to i32
  %28 = icmp eq i32 %27, 65
  br i1 %28, label %29, label %30
29:
  br label %67
30:
  %31 = load i8, i8* %5
  %32 = sext i8 %31 to i32
  %33 = icmp eq i32 %32, 101
  br i1 %33, label %38, label %34
34:
  %35 = load i8, i8* %5
  %36 = sext i8 %35 to i32
  %37 = icmp eq i32 %36, 69
  br i1 %37, label %38, label %39
38:
  br label %67
39:
  %40 = load i8, i8* %5
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %41, 105
  br i1 %42, label %47, label %43
43:
  %44 = load i8, i8* %5
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %45, 73
  br i1 %46, label %47, label %48
47:
  br label %67
48:
  %49 = load i8, i8* %5
  %50 = sext i8 %49 to i32
  %51 = icmp eq i32 %50, 111
  br i1 %51, label %56, label %52
52:
  %53 = load i8, i8* %5
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 79
  br i1 %55, label %56, label %57
56:
  br label %67
57:
  %58 = load i8, i8* %5
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %59, 117
  br i1 %60, label %65, label %61
61:
  %62 = load i8, i8* %5
  %63 = sext i8 %62 to i32
  %64 = icmp eq i32 %63, 85
  br i1 %64, label %65, label %66
65:
  br label %67
66:
  br label %70
67:
  %68 = load i32, i32* %3
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %3
  br label %70
70:
  %71 = load i32, i32* %4
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %4
  br label %8
73:
  %74 = load i32, i32* %3
  ret i32 %74
}
