define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %19, label %17
17:
  br label %74
19:
  %20 = load i8*, i8** %2
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  store i8 %24, i8* %6
  %25 = load i8, i8* %6
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %26, 97
  br i1 %27, label %64, label %28
28:
  %29 = load i8, i8* %6
  %30 = sext i8 %29 to i32
  %31 = icmp eq i32 %30, 101
  br i1 %31, label %64, label %32
32:
  %33 = load i8, i8* %6
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %34, 105
  br i1 %35, label %64, label %36
36:
  %37 = load i8, i8* %6
  %38 = sext i8 %37 to i32
  %39 = icmp eq i32 %38, 111
  br i1 %39, label %64, label %40
40:
  %41 = load i8, i8* %6
  %42 = sext i8 %41 to i32
  %43 = icmp eq i32 %42, 117
  br i1 %43, label %64, label %44
44:
  %45 = load i8, i8* %6
  %46 = sext i8 %45 to i32
  %47 = icmp eq i32 %46, 65
  br i1 %47, label %64, label %48
48:
  %49 = load i8, i8* %6
  %50 = sext i8 %49 to i32
  %51 = icmp eq i32 %50, 69
  br i1 %51, label %64, label %52
52:
  %53 = load i8, i8* %6
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 73
  br i1 %55, label %64, label %56
56:
  %57 = load i8, i8* %6
  %58 = sext i8 %57 to i32
  %59 = icmp eq i32 %58, 79
  br i1 %59, label %64, label %60
60:
  %61 = load i8, i8* %6
  %62 = sext i8 %61 to i32
  %63 = icmp eq i32 %62, 85
  br i1 %63, label %64, label %67
64:
  %65 = load i32, i32* %3
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %3
  br label %70
67:
  %68 = load i32, i32* %4
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %4
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %5
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %5
  br label %10
74:
  %75 = load i32, i32* %3
  %76 = load i32, i32* %4
  %77 = mul nsw i32 %76, 0
  %78 = add nsw i32 %75, %77
  ret i32 %78
}
