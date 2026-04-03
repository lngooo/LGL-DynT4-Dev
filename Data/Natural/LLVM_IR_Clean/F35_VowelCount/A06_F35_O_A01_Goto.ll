define dso_local i32 @VowelCount(i8* %0) {
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
  %14 = sext i8 %13 to i32
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  br label %79
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  store i8 %22, i8* %5
  %23 = load i8, i8* %5
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 97
  br i1 %25, label %26, label %27
26:
  br label %73
27:
  %28 = load i8, i8* %5
  %29 = sext i8 %28 to i32
  %30 = icmp eq i32 %29, 101
  br i1 %30, label %31, label %32
31:
  br label %73
32:
  %33 = load i8, i8* %5
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %34, 105
  br i1 %35, label %36, label %37
36:
  br label %73
37:
  %38 = load i8, i8* %5
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %39, 111
  br i1 %40, label %41, label %42
41:
  br label %73
42:
  %43 = load i8, i8* %5
  %44 = sext i8 %43 to i32
  %45 = icmp eq i32 %44, 117
  br i1 %45, label %46, label %47
46:
  br label %73
47:
  %48 = load i8, i8* %5
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %49, 65
  br i1 %50, label %51, label %52
51:
  br label %73
52:
  %53 = load i8, i8* %5
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 69
  br i1 %55, label %56, label %57
56:
  br label %73
57:
  %58 = load i8, i8* %5
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %59, 73
  br i1 %60, label %61, label %62
61:
  br label %73
62:
  %63 = load i8, i8* %5
  %64 = sext i8 %63 to i32
  %65 = icmp eq i32 %64, 79
  br i1 %65, label %66, label %67
66:
  br label %73
67:
  %68 = load i8, i8* %5
  %69 = sext i8 %68 to i32
  %70 = icmp eq i32 %69, 85
  br i1 %70, label %71, label %72
71:
  br label %73
72:
  br label %76
73:
  %74 = load i32, i32* %3
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %3
  br label %76
76:
  %77 = load i32, i32* %4
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %4
  br label %8
79:
  %80 = load i32, i32* %3
  ret i32 %80
}
