define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sdiv i32 %12, 3
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %15, label %19
15:
  %16 = load i32, i32* %5
  %17 = mul nsw i32 3, %16
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %5
  br label %10
19:
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = icmp sge i32 %21, 1
  br i1 %22, label %23, label %86
23:
  %25 = load i32, i32* %5
  store i32 %25, i32* %6
  br label %26
26:
  %27 = load i32, i32* %6
  %28 = load i32, i32* %4
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %32, label %30
30:
  br label %83
32:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %6
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  store i32 %38, i32* %7
  %40 = load i32, i32* %6
  store i32 %40, i32* %8
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = load i32, i32* %5
  %44 = icmp sge i32 %42, %43
  br i1 %44, label %45, label %55
45:
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %8
  %48 = load i32, i32* %5
  %49 = sub nsw i32 %47, %48
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %46, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %7
  %54 = icmp sgt i32 %52, %53
  br label %55
55:
  %56 = phi i1 [ false, %41 ], [ %54, %45 ]
  br i1 %56, label %57, label %72
57:
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %8
  %60 = load i32, i32* %5
  %61 = sub nsw i32 %59, %60
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %58, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %8
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  %69 = load i32, i32* %5
  %70 = load i32, i32* %8
  %71 = sub nsw i32 %70, %69
  store i32 %71, i32* %8
  br label %41
72:
  %73 = load i32, i32* %7
  %74 = load i32*, i32** %3
  %75 = load i32, i32* %8
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  br label %80
80:
  %81 = load i32, i32* %6
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %6
  br label %26
83:
  %84 = load i32, i32* %5
  %85 = sdiv i32 %84, 3
  store i32 %85, i32* %5
  br label %20
86:
  ret void
}
