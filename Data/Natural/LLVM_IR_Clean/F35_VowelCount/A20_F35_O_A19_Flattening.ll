define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %9
9:
  %10 = load i32, i32* %4
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %72
12:
  %13 = load i8*, i8** %2
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %4
  br label %71
18:
  %19 = load i8*, i8** %2
  %20 = load i8, i8* %19
  store i8 %20, i8* %5
  %22 = load i8, i8* %5
  %23 = sext i8 %22 to i32
  %24 = icmp eq i32 %23, 97
  br i1 %24, label %61, label %25
25:
  %26 = load i8, i8* %5
  %27 = sext i8 %26 to i32
  %28 = icmp eq i32 %27, 101
  br i1 %28, label %61, label %29
29:
  %30 = load i8, i8* %5
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %31, 105
  br i1 %32, label %61, label %33
33:
  %34 = load i8, i8* %5
  %35 = sext i8 %34 to i32
  %36 = icmp eq i32 %35, 111
  br i1 %36, label %61, label %37
37:
  %38 = load i8, i8* %5
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %39, 117
  br i1 %40, label %61, label %41
41:
  %42 = load i8, i8* %5
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %43, 65
  br i1 %44, label %61, label %45
45:
  %46 = load i8, i8* %5
  %47 = sext i8 %46 to i32
  %48 = icmp eq i32 %47, 69
  br i1 %48, label %61, label %49
49:
  %50 = load i8, i8* %5
  %51 = sext i8 %50 to i32
  %52 = icmp eq i32 %51, 73
  br i1 %52, label %61, label %53
53:
  %54 = load i8, i8* %5
  %55 = sext i8 %54 to i32
  %56 = icmp eq i32 %55, 79
  br i1 %56, label %61, label %57
57:
  %58 = load i8, i8* %5
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %59, 85
  br label %61
61:
  %62 = phi i1 [ true, %53 ], [ true, %49 ], [ true, %45 ], [ true, %41 ], [ true, %37 ], [ true, %33 ], [ true, %29 ], [ true, %25 ], [ true, %18 ], [ %60, %57 ]
  %63 = zext i1 %62 to i64
  %64 = select i1 %62, i32 1, i32 0
  store i32 %64, i32* %6
  %65 = load i32, i32* %6
  %66 = load i32, i32* %3
  %67 = add nsw i32 %66, %65
  store i32 %67, i32* %3
  %68 = load i8*, i8** %2
  %69 = getelementptr inbounds i8, i8* %68, i32 1
  store i8* %69, i8** %2
  br label %71
71:
  br label %9
72:
  %73 = load i32, i32* %3
  ret i32 %73
}
